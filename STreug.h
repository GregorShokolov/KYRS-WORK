

<<<<<<< HEAD
int st(float a, float b, float y, double *S)
{
	
   if (a <= 0 || b <= 0|| y <= 0 || y >= 180){
=======
int st(float a, float b, float y,double *S)
{
	
   if (a<0||b<0||y<0||y>180){
>>>>>>> bc30ad693477c994bb9b4b8293d19db76050d40a
		return -1;
   }

   
    
<<<<<<< HEAD
    *S = a * b * sin(y * M_PI / 180) / 2;
=======
    *S = a*b*sin(y*3.14/180)/2;
>>>>>>> bc30ad693477c994bb9b4b8293d19db76050d40a
	   
 
    return 1;
}
