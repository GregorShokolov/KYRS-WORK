


int st(float a, float b, float y, double *S)
{
	
   if (a <= 0 || b <= 0|| y <= 0 || y >= 180){



   
    

    *S = a * b * sin(y * M_PI / 180) / 2;

  
   
 
    return 1;
}
else 
	return -1;
}
