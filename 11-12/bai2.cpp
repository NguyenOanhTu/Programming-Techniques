#include<stdio.h>
int main() {
FILE *fBin=fopen ("numbers.bin","wb");
if (fBin!=NULL) {
double d=3.14; int i=101; long l=54321;
fwrite (&d,sizeof(double),1,fBin);
fwrite(&i,sizeof(int),1,fBin);
fwrite(&l,sizeof(long),1,fBin);
fclose(fBin);
}
else{
		printf("Text File open fail.");
}
FILE *f = fopen("numbers.bin", "rb");
if (f!=NULL) {
double d2; int i2; long l2;
fread (&d2,sizeof(double),1,f);
fread(&i2,sizeof(int),1,f);
fread(&l2,sizeof(long),1,f);
printf("The numbers are: %f %d %ld",d2,i2,l2);
fclose(f);
}
else{
		printf("Text File open fail.");
	}
return 0;
}
