
int fpb(int x,int y)
{
	int hasil,sisabagi;
	if(y<=x && x%y==0)
	{
		return(y);
	}
	else if(x<y)
	{
		hasil=fpb(y,x);
		return(hasil);
	}
	else 
	{
		sisabagi=x%y;
		hasil=fpb(y,sisabagi);
		return(hasil);
	}
}