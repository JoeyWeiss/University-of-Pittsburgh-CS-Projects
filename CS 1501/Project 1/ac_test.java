//Joseph Weiss <jbw40>
//1501 Project 1


import java.io.*;  
import java.util.*;


public class ac_test {

	
	public static void main(String[] args) {

		 String result = ""; 
		 char test=' ';
		 
	       Scanner scan = new Scanner(System.in);

		 		 
		File dictionary = new File("dictionary.txt");
		File myHistory = new File("user_history.txt");

		
		
		int suggestionIndex;
		
		boolean predictionsOffered=false;
		
		dlbTrie createDict = new dlbTrie();
		 dlbTrie createUserHist = new dlbTrie();
		 
		 
			try{
	        	Scanner dictScan =new Scanner(dictionary);
	    		System.out.println("dictionary.txt found! Begining autocompletion program: \n");

	        	
	        	  while(dictScan.hasNextLine()) {
	        	        
	        		  createDict.newWord(dictScan.nextLine());
	        	  }
	              
	   
	        	  try {
	        		  Scanner myHistoryScan=new Scanner(myHistory);

	        		  while(myHistoryScan.hasNextLine()) {
	        
	        			  createUserHist.newWord(myHistoryScan.nextLine());
	        		  }
	        	  //If user history is not found, then make a new one
	        	  }catch(IOException e){

	        		  myHistory.createNewFile();
	        	  }
    	  
	        	  double start=0;
	      		double end = 0;
	      		double range=0,range2=0;
       

		System.out.print("Enter the first character: ");
		int p=0;
		String output;
		
		
			ArrayList<String> suggestions = new ArrayList<String>();
			ArrayList<String> everySuggestion = new ArrayList<String>();
			ArrayList<String> usedSuggestions = new ArrayList<String>();
			ArrayList<String> testSuggestions = new ArrayList<String>();
		
		
		while(test!='!') {
			
			

			if(p > 0){
                System.out.print("\nEnter first Character of the next word: ");
        		

            }
			test= scan.nextLine().charAt(0);
		result="";
		
		
		
		while(((test >= 'A') && (test <= 'z'))||(test=='\'')){
			start=System.nanoTime();
			result= result + test;
			suggestions.clear();
			
			everySuggestion = createDict.returnPredictions(test);
			usedSuggestions = createUserHist.returnPredictions(test);

			//String[] output = new String[5];
			 output="";
			
			int counter=0;
			boolean stop=false;
			

			for(int k=0; k < usedSuggestions.size();k++) {
				
				suggestions.add(usedSuggestions.get(k));
				
				output+="("+(k+1)+")";
				output+=usedSuggestions.get(k)+"\t";        
			}
			
			testSuggestions.clear(); 
			for(int j=usedSuggestions.size(); j<5;j++) {
			
				
				if(everySuggestion.size()>counter) {
					
					String lookFor = everySuggestion.get(counter);
					if(testSuggestions.contains(lookFor)) {
						stop=true;

					}
					if(usedSuggestions.contains(lookFor)){
						stop=true;

					}}
				
				
				while(stop==true) {
				
						counter++;
					stop=false;
					String lookFor2 = everySuggestion.get(counter);
					if(everySuggestion.size()>counter) {
						
							
					if(testSuggestions.contains(lookFor2)) {
						stop=true;

					}
					if(usedSuggestions.contains(lookFor2)){
						stop=true;

					}}
				}
			
			
			if(everySuggestion.size()>counter) {
				testSuggestions.add(everySuggestion.get(counter));
				suggestions.add(everySuggestion.get(counter));
				
				output+="("+(j+1)+") ";
				output+=everySuggestion.get(counter) + "\t";     
				counter++;
			}
			
			
			
			}
		
				end=System.nanoTime();
				
				range=(end-start)/1000000000;
				
				
				//System.out.println("Start: "+start+" End: "+end);
				System.out.print("\n(");
				 System.out.format("%f", range);
					System.out.print(" s)");

					if(output.equals("")) {
						predictionsOffered=false;
						System.out.print("\nNo predicions were found. Please finish spelling your word.");
		
					}
					
					else {
						predictionsOffered=true;
				System.out.println("\nPredictions:");
					}
			
					
					
					System.out.print(output);
				

				
				

		        System.out.print("\n\nEnter the next character: ");   
				test= scan.nextLine().charAt(0);
				p++;
		}
		range2=range2+ (end-start);
		range2=range2/1000000000;
if(test=='$') {
			System.out.println("\nWORD COMPLETED:  " + result);
			
			if(usedSuggestions.contains(result)) {
				
			}else
			{
				createUserHist.newWord(result);
				try {
					
			

                   FileWriter writer = new FileWriter(myHistory,true);
             
                   writer.write(result+ System.getProperty("line.separator"));
                 
                    writer.close();
				
				}catch(IOException e) {
					System.out.println("Didnt work");
				}
				
			}
			


		}else if(test=='0'||test=='1'||test=='2' ||test=='3'||test=='4'||test=='5') {
			if(predictionsOffered==true){
			System.out.print("\nWORD COMPLETED: ");
			
			suggestionIndex= test-'1';
			String selectedWord=suggestions.get(suggestionIndex);
			System.out.print(selectedWord+"\n");
			

			if(usedSuggestions.contains(selectedWord)) {
				
			}else
			{
				createUserHist.newWord(selectedWord);
				try {
					
			

                   FileWriter writer = new FileWriter(myHistory,true);
             
                   writer.write(selectedWord+ System.getProperty( "line.separator" ));
                 
                    writer.close();
				
				}catch(IOException e) {
					System.out.println("Didnt work");
				}
				
			}
		}else {
			System.out.println("\nNot a valid input. Please enter a letter, \'!\', or \'$\' if no predictions are offered. ");
		}
		
		
		}
 
else if(test!='!'){
			System.out.println("\nNot a valid input. Please enter a letter, \'!\', or \'$\' if no predictions are offered. ");
		}
createDict.clearPrediction();  
		createUserHist.clearPrediction();
	
		}
		System.out.print("\nAverage time: ");
		
			range2=range2/p;
			
			 System.out.format("%f", range2);
			 
			 System.out.println(" s");
			 
	     	System.out.println("Thanks for using the autocompletion program. Bye!\n");
	     	
	     	
				}catch(IOException e){
					System.out.println("dictionary.txt does not exist  :(\n");
	        	}
			
			
	}
}
