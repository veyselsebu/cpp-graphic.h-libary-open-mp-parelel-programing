
#include "graphics.h"
#include <omp.h>
#include <MMSystem.h>
#include <Windows.h>
#include "string"
using namespace std;

int x = 120, y = 120, r = 20, oncekix = 120, oncekiy = 120;
int x1 = 180, a1 = 520, r1 = 15, oncekix1 = 180, oncekiy1 = 480;
int x2 = 660, y2 = 230, r2 = 15, oncekix2 = 660, oncekiy2 = 230;
int x3 = 750, y3 = 390, r3 = 15, oncekix3 = 750, oncekiy3 = 390;
int x4 = 420, y4 = 300, r4 = 15, oncekix4 = 720, oncekiy4 = 300;

 char tus;
bool islem;
int ekle = 4;
int say = 0;
boolean durum = true;
string c1 = "canavar1.jpg";
string c2 = "canavar2.jpg";
void haritaCiz(){
	
	setcolor(WHITE);
	line(90, 90, 90, 540);
	line(90, 360, 180, 360);
	line(180, 90, 990, 90);
	line(90, 540, 900, 540);
	line(990, 90, 990, 540);
	line(180, 180, 270, 180);
	line(180, 180, 180, 270);
	line(180, 270, 450, 270);
	line(270, 270, 270, 360);
	line(180, 450, 360, 450);
	line(360, 90, 360, 270);
	line(360, 360, 360, 450);
	line(360, 360, 450, 360);
	line(450, 270, 450, 360);
	line(450, 450, 450, 540);
	line(450, 180, 540, 180);
	line(540, 180, 540, 270);
	line(540, 360, 540, 450);
	line(540, 270, 630, 270);
	line(630, 90, 630, 180);
	line(630, 270, 630, 360);
	line(630, 450, 630, 540);
	line(540, 450, 720, 450);
	line(720, 180, 720, 270);
	line(630, 360, 810, 360);
	line(720, 360, 720, 450);
	line(720, 180, 900, 180);
	line(810, 180, 810, 360);
	line(900, 270, 900, 360);
	line(900, 270, 990, 270);
	line(810, 450, 990, 450);


}

 bool duvarKontrol(int degerx,int degery)
 {
	 if (degerx>65 && degerx<115){
		 return false;
	 }
	 if ((degerx>65 && degerx < 205) && (degery > 335 && degery<385)){
		 return false;
	 }
	 if ((degerx>155 && degerx < 1115) && (degery > 65 && degery<115)){
		 return false;
	 }
	 if ((degerx>65 && degerx < 925) && (degery > 515 && degery<565)){
		 return false;
	 }
	 if ((degerx>965 && degerx < 1115) && (degery >65  && degery<565)){
		 return false;
	 }
	 if ((degerx>155 && degerx < 295) && (degery > 155 && degery<205)){
		 return false;
	 }
	 if ((degerx>155 && degerx < 205) && (degery > 155 && degery<295)){
		 return false;
	 }
	 if ((degerx>155 && degerx < 475) && (degery > 245 && degery<295)){
		 return false;
	 }
	 if ((degerx>245 && degerx < 295) && (degery > 245 && degery<385)){
		 return false;
	 }
	 if ((degerx>155 && degerx < 385) && (degery > 425 && degery<475)){
		 return false;
	 }
	 if ((degerx>335 && degerx < 385) && (degery > 65 && degery<295)){
		 return false;
	 }
	 if ((degerx>335 && degerx < 385) && (degery > 335 && degery<475)){
		 return false;
	 }
	 if ((degerx>335 && degerx < 475) && (degery > 335 && degery<385)){
		 return false;
	 }
	 if ((degerx>425 && degerx < 475) && (degery > 245 && degery<385)){
		 return false;
	 }
	 if ((degerx>425 && degerx < 475) && (degery > 425 && degery<565)){
		 return false;
	 }
	 if ((degerx>425 && degerx < 565) && (degery > 155 && degery<205)){
		 return false;
	 }
	 if ((degerx>515 && degerx < 565) && (degery > 155 && degery<295)){
		 return false;
	 }
	 if ((degerx>515 && degerx < 565) && (degery > 335 && degery<475)){
		 return false;
	 }
	 if ((degerx>515 && degerx < 655) && (degery > 245 && degery<295)){
		 return false;
	 }
	 if ((degerx>605 && degerx < 655) && (degery > 65 && degery<205)){
		 return false;
	 }
	 if ((degerx>605 && degerx < 655) && (degery > 245 && degery<385)){
		 return false;
	 }
	 if ((degerx>605 && degerx < 655) && (degery > 425 && degery<565)){
		 return false;
	 }
	 if ((degerx>515 && degerx < 745) && (degery > 425 && degery<475)){
		 return false;
	 }
	 if ((degerx>695 && degerx < 745) && (degery > 155 && degery<295)){
		 return false;
	 }
	 if ((degerx>615 && degerx < 835) && (degery > 335 && degery<385)){
		 return false;
	 }
	 if ((degerx>695 && degerx < 745) && (degery > 335 && degery<475)){
		 return false;
	 }
	 if ((degerx>695 && degerx < 925) && (degery > 155 && degery<205)){
		 return false;
	 }
	 if ((degerx>785 && degerx < 835) && (degery > 155 && degery<385)){
		 return false;
	 }
	 if ((degerx>875 && degerx < 925) && (degery > 245 && degery<385)){
		 return false;
	 }
	 if ((degerx>875 && degerx < 1115) && (degery > 245 && degery<295)){
		 return false;
	 }
	 if ((degerx>785 && degerx < 965) && (degery > 425 && degery<475)){
		 return false;
	 }

	

	 
	 return true;
 }
void cizdir(){

	readimagefile("siyah.jpg", oncekix - 19, oncekiy - 19, oncekix + 19, oncekiy + 19);
	const char * c = c1.c_str();
	const char * c5 = c2.c_str();
	if (say % 2 == 0){
		readimagefile(c, x - 19, y - 19, x + 19, y + 19);
	}
	else{
		readimagefile(c5, x - 19, y - 19, x + 19, y + 19);
	}
}
 void karakterHareketi(){
	 if (durum){
	
		 tus = getch();
		
		 oncekix = x;
		 oncekiy = y;
		 if (tus == 77)
		 {
			 say++;
			 x += ekle;
			 islem = true;
			 c1 = "canavar1.jpg";
			 c2 = "canavar2.jpg";
			 cizdir();
		 }
		 else
			 if (tus == 75)
			 {
				 say++;
				 x -= ekle;
				 islem = false;
				 c1 = "canavar1sol.jpg";
				 c2 = "canavar2sol.jpg";
				 cizdir();
			 }
			 else
				 if (tus == 72)
				 {
					
					 say++;
					 y -= ekle;
					 islem = false;
					 c1 = "canavar1ust.jpg";
					 c2 = "canavar2ust.jpg";
					 cizdir();
				 }
				 else
					 if (tus == 80)
					 {
						 say++;
						 y += ekle;
						 islem = true;
						 c1 = "canavar1alt.jpg";
						 c2 = "canavar2alt.jpg";
						 cizdir();
					 }
		 if (!duvarKontrol(x, y)){

			 x = oncekix;
			 y = oncekiy;
			 if (x == oncekix){
				 if (islem)
					 oncekix -= 2;
				 else
					 oncekix += 2;
			 }
			 if (y == oncekiy){
				 if (islem)
					 oncekiy -= 2;
				 else
					 oncekiy += 2;

			 }
		 }
		
	 }
	 else{
		 cleardevice();
	 }
 }
 bool bitisKontrol(){
	 if (x<990 && x>900 && y > 540){
		 return true;
	 }
	 else{
		 return false;
	 }

	 }
void canavar(){
	if (durum){

		int i = 5;
		oncekix1 = x1;
		oncekiy1 = a1;

		if ((x1 >= 180) && (x1 < 420) && (a1 == 520)){
			x1 = x1 + i;
		}

		if ((x1 == 415) && (a1 <= 520) && (a1 > 425)){
			a1 = a1 - i;

		}


		if ((x1 >= 395) && (x1 < 480) && (a1 == 430)){
			x1 = x1 + i;
		}
		if ((x1 == 475) && (a1 < 520) && (a1 >= 430)){
			a1 = a1 + i;

		}

		if ((x1 >= 475) && (x1 < 600) && (a1 == 515)){
			x1 = x1 + i;
		}
		if ((x1 == 595) && (a1 <= 515) && (a1 > 505)){
			a1 = a1 - i;
		}
		if ((x1 <= 595) && (x1 > 480) && (a1 == 510)){
			x1 = x1 - i;

		}
		if ((a1 <= 510) && (a1 > 420) && (x1 == 485)){
			a1 = a1 - i;

		}

		if ((385 < x1) && (x1 <= 485) && (a1 == 425)){

			x1 = x1 - i;
		}
		if ((a1 >= 425) && (a1 < 495) && (x1 == 390)){

			a1 = a1 + i;
		}
		if ((x1 <= 390) && (x1 > 175) && (a1 == 490)){

			x1 = x1 - i;
		}
		if ((a1 >= 490) && (a1 < 525) && (x1 == 180)){
			a1 = a1 + i;
		}

		
		//delay(100);
		
		
		readimagefile("siyah.jpg", oncekix1 - 14, oncekiy1 - 14, oncekix1 + 14, oncekiy1 + 14);

		readimagefile("canavar3.jpg", x1 - 14, a1 - 14, x1 + 14, a1 + 14);
	
	}
	else{
		cleardevice();
	}
	 
 //setcolor(WHITE);
	// circle(x1, a1, r1);

	 
 }

void canavar2(){

	if (durum){
		int i = 5;
		oncekix2 = x2;
		oncekiy2 = y2;

		if ((y2 <= 230) && (y2 > 120) && (x2 == 660)){
			y2 = y2 - i;
		}
		if ((y2 == 125) && (x2 >= 660) && (x2 < 960)){
			x2 = x2 + i;
		}
		if ((x2 == 960) && (y2 >= 125) && (y2 < 240)){
			y2 = y2 + i;
		}
		if ((y2 == 235) && (x2 <= 960) && (x2 > 830)){
			x2 = x2 - i;
		}
		if ((y2 <= 235) && (y2 > 205) && (x2 == 835)){
			y2 = y2 - i;
		}
		if ((y2 == 210) && (x2 >= 835) && (x2 < 955)){
			x2 = x2 + i;
		}
		if ((y2 <= 210) && (y2 > 150) && (x2 == 950)){
			y2 = y2 - i;
		}
		if ((y2 == 155) && (x2 <= 950) && (x2 > 680)){
			x2 = x2 - i;
		}
		if ((x2 == 685) && (y2 >= 155) && (y2 < 235)){
			y2 = y2 + i;
		}
		if ((y2 == 230) && (x2 <= 685) && (x2 > 655)){
			x2 = x2 - i;
		}



		//delay(100);


		readimagefile("siyah.jpg", oncekix2 - 14, oncekiy2 - 14, oncekix2 + 14, oncekiy2 + 14);

		readimagefile("canavar3.jpg", x2 - 14, y2 - 14, x2 + 14, y2 + 14);

	}
	else {
		cleardevice();

	}
}
void canavar3(){
	if (durum){
		int i = 5;
		oncekix3 = x3;
		oncekiy3 = y3;
		if ((x3 == 750) && (y3 >= 390) && (y3 < 480)){
			y3 = y3 + i;
		}
		if ((y3 == 475) && (x3 <= 750) && (x3 > 650)){
			x3 = x3 - i;
		}
		if ((x3 == 655) && (y3 >= 475) && (y3 < 505)){
			y3 = y3 + i;
		}
		if ((y3 == 500) && (x3 >= 655) && (x3 < 955)){
			x3 = x3 + i;
		}
		if ((y3 <= 500) && (y3 > 470) && (x3 == 950)){
			y3 = y3 - i;
		}
		if ((y3 == 475) && (x3 <= 950) && (x3 > 775)){
			x3 = x3 - i;
		}
		if ((y3 <= 475) && (y3 > 420) && (x3 == 780)){
			y3 = y3 - i;
		}
		if ((y3 == 425) && (x3 >= 780) && (x3 < 960)){
			x3 = x3 + i;
		}
		if ((y3 <= 425) && (y3 > 385) && (x3 == 955)){
			y3 = y3 - i;
		}
		if ((y3 == 390) && (x3 <= 955) && (x3 > 745)){
			x3 = x3 - i;
		}



		//delay(100);


		readimagefile("siyah.jpg", oncekix3 - 14, oncekiy3 - 14, oncekix3 + 14, oncekiy3 + 14);

		readimagefile("canavar3.jpg", x3 - 14, y3 - 14, x3 + 14, y3 + 14);
	}
	else{
		cleardevice();
	}
}
void canavar4(){
	if (durum){

		int i = 5;
		oncekix4 = x4;
		oncekiy4 = y4;
		if ((y4 == 300) && (x4 <= 420) && (x4 > 290)){
			x4 = x4 - i;
		}
		if ((y4 >= 300) && (y4 < 390) && (x4 == 295)){
			y4 = y4 + i;
		}
		if ((y4 == 385) && (x4 <= 295) && (x4 > 240)){
			x4 = x4 - i;
		}
		if ((y4 <= 385) && (y4 > 300) && (x4 == 245)){
			y4 = y4 - i;
		}
		if ((y4 == 305) && (x4 <= 245) && (x4 > 155)){
			x4 = x4 - i;
		}
		if ((y4 <= 305) && (y4 > 150) && (x4 == 160)){
			y4 = y4 - i;
		}
		if ((y4 == 155) && (x4 >= 160) && (x4 < 300)){
			x4 = x4 + i;
		}
		if ((y4 >= 155) && (y4 < 245) && (x4 == 295)){
			y4 = y4 + i;
		}
		if ((y4 == 240) && (x4 >= 295) && (x4 < 305)){
			x4 = x4 + i;
		}
		if ((y4 <= 240) && (y4 > 140) && (x4 == 300)){
			y4 = y4 - i;
		}
		if ((y4 == 145) && (x4 <= 300) && (x4 > 140)){
			x4 = x4 - i;
		}
		if ((y4 >= 145) && (y4 < 340) && (x4 == 145)){
			y4 = y4 + i;
		}
		if ((y4 == 335) && (x4 >= 145) && (x4 < 210)){
			x4 = x4 + i;
		}
		if ((y4 >= 335) && (y4 < 400) && (x4 == 205)){
			y4 = y4 + i;
		}
		if ((y4 == 395) && (x4 >= 205) && (x4 < 330)){
			x4 = x4 + i;
		}
		if ((y4 <= 395) && (y4 > 305) && (x4 == 325)){
			y4 = y4 - i;
		}
		if ((y4 == 310) && (x4 >= 325) && (x4 < 425)){
			x4 = x4 + i;
		}
		if ((y4 <= 310) && (y4 > 295) && (x4 == 420)){
			y4 = y4 - i;
		}





		//delay(100);


		readimagefile("siyah.jpg", oncekix4 - 14, oncekiy4 - 14, oncekix4 + 14, oncekiy4 + 14);

		readimagefile("canavar3.jpg", x4 - 14, y4 - 14, x4 + 14, y4 + 14);
	}
	else
	{
		cleardevice();
	}
}
void müzik(){
	PlaySound(TEXT("arkafon.wav"), NULL, SND_FILENAME);
	
}
bool Canavar1Kontrol(){
	if (x<x1 + (r + r1) && x>x1 - (r1 + r) && y<a1 + (r + r1) && y>a1 - (r1 + r)){
		x = 120;
		y = 120;
		return  false;
	
	}
	if (x<x2 + (r + r1) && x>x2 - (r1 + r) && y<y2 + (r + r1) && y>y2 - (r1 + r)){
		x = 120;
		y = 120;
		return  false;

	}
	if (x<x3 + (r + r1) && x>x3 - (r1 + r) && y<y3 + (r + r1) && y>y3 - (r1 + r)){
		x = 120;
		y = 120;
		return  false;

	}
	if (x<x4 + (r + r1) && x>x4 - (r1 + r) && y<y4 + (r + r1) && y>y4 - (r1 + r)){
		x = 120;
		y = 120;
		return  false;

	}
	return true;
}

int main(void)
{

	initwindow(1080, 630);
	//readimagefile("canavar1.png", 50, 50, 250, 200);
	readimagefile("C:\\Users\\veysels\\Desktop\\arka.jpg", 0, 0, 1080, 630);
	haritaCiz();
	
#pragma omp parallel sections num_threads(4)
	{
#pragma omp section
		{
			while (durum){

			karakterHareketi();
		}
		}
#pragma omp section
		{
			while (durum){
				canavar();
				canavar2();
				canavar3();
				canavar4();
				delay(100);
			}
		}

#pragma omp section
		{
			while (durum){
				müzik();
			}
		}
#pragma omp section
		{
			while (durum){
				if (!Canavar1Kontrol()){
					durum = false;
					cleardevice();

					setcolor(WHITE);
					outtextxy(490, 300, "***   OYUN BÝTTÝ   ***");
				}
				if (bitisKontrol()){
					durum = false;
					cleardevice();

					setcolor(WHITE);
					outtextxy(490, 300, "***   KAZANDINIZ   ***");
				}
			}
		}



		
	}

	
 
		system("pause");
	return 0;
}