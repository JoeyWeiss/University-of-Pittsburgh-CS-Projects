    // Joseph Weiss Project part B
    	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#pragma pack(1)
	#include <math.h>
    
struct header {
    char formatIdentifier[2];
    unsigned int fileSize;
    short reservedValue1;
    short reservedValue2;
    unsigned int offset;
};
struct dibHeader {
    unsigned int headerSize;
    int width;
    int height;
    short numColorPlanes;
    short bitsPerPixel;
    unsigned int compressionScheme;
    unsigned int imageSize;
    int horizRes;
    int vertiRes;
    unsigned int numColors;
    unsigned int importantColors;
};
struct pixelArray {
    unsigned char b;
    unsigned char g;
    unsigned char r;
};
//Reads in file to structs
 void readFile(char fileName[], char changeType[]) {
    struct header bmp;
    struct dibHeader dib;
    struct pixelArray pixel;
    FILE *fp = fopen(fileName, "rb+");
  
    fread(bmp.formatIdentifier, 1, 2, fp);
   
    if (bmp.formatIdentifier[0] != 'B' && bmp.formatIdentifier[1] != 'M') {
        printf("Sorry that file format is not supported. Goodbye");
        exit(-1);
    }
    
    fread(&bmp.fileSize, 4, 1, fp);
   
    fseek(fp, 4, SEEK_CUR);
    fread(&bmp.offset, 4, 1, fp);
    
    fread(&dib.headerSize, 4, 1, fp);
   
    if (dib.headerSize != 40) {
        printf("Sorry that file format is not supported. Goodbye");
        exit(-1);
    }
    fread(&dib.width, 4, 1, fp);
    fread(&dib.height, 4, 1, fp);
    fread(&dib.numColorPlanes, 2, 1, fp);
    fread(&dib.bitsPerPixel, 2, 1, fp);
    fread(&dib.compressionScheme, 4, 1, fp);
    fread(&dib.imageSize, 4, 1, fp);
    fread(&dib.horizRes, 4, 1, fp);
    fread(&dib.vertiRes, 4, 1, fp);
    fread(&dib.numColors, 4, 1, fp);
    fread(&dib.importantColors, 4, 1, fp);
    
    //If the user enters "-invert" do inversion
    if( strcmp(changeType,"-invert") == 0) {
     int i = 0;
    while (i < dib.width) {
        int j = 0;
        while (j < dib.height) {
            fread(&pixel.b, 1, 1, fp);
            unsigned int blue = pixel.b;
            blue = ~blue;
            pixel.b = (char) blue;
            fread(&pixel.g, 1, 1, fp);
            unsigned int green = pixel.g;
            green = ~green;
            pixel.g = (char) green;
            fread(&pixel.r, 1, 1, fp);
            unsigned int red = pixel.r;
            red = ~red;
            pixel.r = (char) red;
            fseek(fp, -3, SEEK_CUR);
            fwrite(&pixel.b, 1, 1, fp);
            fwrite(&pixel.g, 1, 1, fp);
            fwrite(&pixel.r, 1, 1, fp);
            j++;
        }
        i++;
    }
    fclose(fp);
    //If user enters -greyscale, greyscale image:
    }else if((strcmp(changeType,"-grayscale") == 0)){
        double greytest, grey;
      int x = 0;
    while (x < dib.width) {
        int y = 0;
        while (y < dib.height) {
            fread(&pixel.b, 1, 1, fp);
             unsigned int blue = pixel.b;
             fread(&pixel.g, 1, 1, fp);
             unsigned int green = pixel.g;
             fread(&pixel.r, 1, 1, fp);
             unsigned int red = pixel.r;
             
             greytest= .02126*red +.7152*green+.0772*blue;
             
             if(red>=0.0031308){
                 red=12.92*greytest;
             }else{
                 double compare = (1/2.4);
                 double powergrey=pow(greytest,compare);
                 red=((1.055*powergrey)-.055);
             }
             if(blue>=0.0031308){
                 blue=12.92*greytest;
             }else{
                 double compare = (1/2.4);
                 double powergrey=pow(greytest,compare);
                 blue=((1.055*powergrey)-.055);
             }
            if(green>=0.0031308){
                 green=12.92*greytest;
             }else{
                 double compare = (1/2.4);
                 double powergrey=pow(greytest,compare);
                 green=((1.055*powergrey)-.055);
             }
             
            pixel.b = (char) blue;
            
            pixel.g = (char) green;
            pixel.r = (char) red;
            fseek(fp, -3, SEEK_CUR);
            fwrite(&pixel.b, 1, 1, fp);
            fwrite(&pixel.g, 1, 1, fp);
            fwrite(&pixel.r, 1, 1, fp);
            
            y++;
        }
        x++;
        }
        fclose(fp);
       
}
}
int main(int argc, char *argv[]) {
    //Call readFile
    readFile(argv[2], argv[1]);
    return 0;
}

