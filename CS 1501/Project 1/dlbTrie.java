//Joseph Weiss <jbw40>
//1501 Project 1

import java.io.*;  
import java.util.*;

	
	public class dlbTrie {
	
		    
		
		private class Node{
			
			Node parent=null;
			Node child =null;
			Node sibling = null;
			
			String test;    
			char data;
			ArrayList<String> prediction;
			
			public Node(String input, char testCharacter){
				
		        int lastCharIndex=input.length()-1;
		        test = input.substring(0, lastCharIndex);
		        
		        data = testCharacter;
		    }

			    public ArrayList<String> returnAPrediction(){
			    	prediction = new ArrayList<String>();
			       
			        if(data=='^')
			        	prediction.add(test);
			       
			        if((child==null) && (sibling==null)) {
			        	return prediction;
			        }else{
			        	if(sibling!=null) 
				        	prediction.addAll(sibling.returnAPrediction());
			        	if(child!=null) 
			        	prediction.addAll(child.returnAPrediction());
			        	
			        	
			        	
			        }
			        
			        return prediction;
			    }
			
			
		}
		
		Node root;
	    Node iterate;
		   public dlbTrie() {
					root=null;
					iterate=null;
				}


		  

			public ArrayList<String> returnPredictions(char test){
				ArrayList<String> returnList;
		        if(root==null) {
		            return new ArrayList<String>();
		        }
		            boolean tester = false;
		            while((tester==false) && (iterate.sibling != null)){
		            	if (iterate.data==test){
		            		tester = true;
		            	}else {
		        	iterate=iterate.sibling;
		            }
		        }
		            returnList=iterate.returnAPrediction();
		        if(iterate.data!=test) {
		        	returnList=new ArrayList<String>();
		        	
		        	
		        }else {
		        	iterate = iterate.child;
		        	returnList=iterate.returnAPrediction();

		        }
		        	
		        return returnList;
		    } 
			
			
			 

		   
		 
	public void newWord(String test) {
		Node curr = root;

		test = test + '^';
		
		if(root!=null) {
			
			
	        for(int q=0;q<test.length(); q++){
	        	
	    		Node replacement=new Node(test,test.charAt(q));

	        	if((!(curr.child==null&&curr.data!='^'))&&(curr.data!=test.charAt(q))){
	                
	        		while((curr.sibling!=null)&&(curr.data != test.charAt(q))){

	                    curr = curr.sibling;

	        		}
	        		
	        		if(curr.data != test.charAt(q)) {
	        			if(curr.sibling == null) {
	        				 curr.sibling = replacement;

	 	                	curr = curr.sibling;
	        			}
	        		}else { 
	        			curr = curr.child;
	        			
	        		}
	        		            	
	            	
	            	
	            }else{
	            	if(curr.child != null){
	            		curr = curr.child;
	                    

	            	}else{

	            		curr.child = new Node(test,test.charAt(q));

	                    curr = curr.child;

	                }
	            }
	        }
			
		
	}else {
		root = new Node(test,test.charAt(0));
	    curr=root;
	     
	    for(int j= 0; j < test.length(); j++){

	        curr.child = new Node(test,test.charAt(j));

	    	curr = curr.child;
	    }
	
		
	}
		
		iterate = root;}  
	public void clearPrediction() {
	    iterate = root;
	    }
	
    
    
}