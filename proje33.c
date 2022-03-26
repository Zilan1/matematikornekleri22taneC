#include <stdio.h>
#include <stdlib.h>

int main() {
	
	printf("**********Matematik-Geometri Menüsü**********");
	printf("1-Faktoriyel Hesaplama\n");
	printf("2-Hiz Hesaplama\n");
	printf("3-Faiz Hesaplama\n");
	printf("4-Girilen x degerine gore x<0 ise 5x-2 x>0 ise 10x-5x+4 x=0 ise 5 islemlerinin sonucu\n");
    printf("5-Girilen x degerine gore birim cemberin hangi bolgesinde oldugunu yazan program");
	printf("6-Girilen ucgenin 2 degerine gore ucuncusunu hesaplama\n");
	printf("7-Kenari girilen cokgenin bir ic acisini hesaplama\n");
	printf("8-Paralelkenarda alan hesaplama\n");
	printf("9-Dikdortgenin alanini hesaplama\n");
	printf("10-Dikdortgenin cevresini hesaplama\n");
	printf("11-Dikdortgenin hacmini hesaplama\n");
	printf("12-Dikdortgenin yuzey alanini hesaplama\n");
	printf("13-Karenin alanini hesaplama\n");
	printf("14-Karenin cevresini hesaplama\n");
	printf("15-Karenin hacmini hesaplama\n");
	printf("16-Kare prizmanin yuzey alanini hesaplama\n");
	printf("17-Yamugun orta tabanini hesaplama\n");
	printf("18-Dairenin alanini hesaplama\n");
	printf("19-Dairenin cevresini hesaplama\n");
	printf("20-Kupun hacmini hesaplama\n");
	printf("21-Kupun yuzey alanini hesaplama\n");
	printf("22-Dik silindirin hacmini hesaplama\n");
	printf("Seciminizi yapiniz: ");
	
	int sec;
	scanf("%d",&sec);
	
	switch(sec)
	{
		
     case 1: 
		printf("~~~~~Faktoriyel Hesaplama~~~~~\n\n");
		int sayi,i=1,fakhesapla=1;
		printf("Faktoriyeli alinacak sayiyi giriniz: ");
		scanf("%d",&sayi);
		
		for(i;i<sayi;sayi--)
		{
			fakhesapla*=sayi;
		}
		printf("Faktoriyel Sonucu: %d",fakhesapla);
		break;
		
	 case 2:	 
		printf("~~~~~Hiz Hesaplama~~~~~\n\n");
		float hiz=0,zaman,yol;
		
		printf("Yol uzunlugunu giriniz[km]: ");
		scanf("%f",&yol);
		
		printf("Zamani giriniz[s]: ");
		scanf("%f",&zaman);
		
		hiz=yol/zaman;
		
		printf("Ortalama Hiziniz: %f",hiz);
		break;
		
		case 3:
		
		system("CLS");
		
		int anapara,faizorani,anaparaninfaizdekaldigiyil,anaparaninfaizdekaldigiay,anaparaninfaizdekaldigigun,faizgeliri;
		
		printf("~~~~~Faiz Hesaplama~~~~~\n\n");
		printf("1-Yillik Faiz Hesaplama: ");
		printf("2-Aylik Faiz Hesaplama: ");
	    printf("3-Gunluk Faiz Hesaplama: ");
	    printf("Faiz Hesaplama Seklinizi Belirtiniz[1-3]: ");
	    scanf("%d",&sec);
	    
	    if(sec==1)
	    {
	    	printf("~~~~~Yillik Faiz Hesaplama~~~~~");
			printf("Anaparayi Giriniz: ");
	    	scanf("%d",&anapara);
	    	printf("Faiz Oranini Giriniz: ");
	    	scanf("%d",&faizorani);
	    	printf("Faizde Kac Yil Kalacak: ");
	    	scanf("%d",&anaparaninfaizdekaldigiyil);
	    	faizgeliri=anapara*faizorani*anaparaninfaizdekaldigiyil/100;
			printf("Faiz Orani: %d\n",faizgeliri);
	    	printf("Anapara ve faiz orani: %d",(anapara+faizgeliri));	
	    }
	
	    else if(sec==2) 
	    {
	    	printf("~~~~~Aylik Faiz Hesaplama~~~~~");
			printf("Anaparayi Giriniz: ");
	    	scanf("%d",&anapara);
	    	printf("Faiz Oranini Giriniz: ");
	    	scanf("%d",&faizorani);
	    	printf("Faizde Kac Ay Kalacak: ");
	    	scanf("%d",anaparaninfaizdekaldigiay);
	    	faizgeliri=anapara*faizorani*anaparaninfaizdekaldigiay/1200;
			printf("Faiz Orani: %d\n",faizgeliri);
	    	printf("Anapara ve Faiz Orani: %d\n",(anapara+faizgeliri));
		}
	    
	    else if (sec==3)
	    {
	    	printf("~~~~~Gunluk Faiz Hesaplama~~~~~");
	    	printf("Anaparayi Giriniz: ");
	    	scanf("%d",&anapara);
	    	printf("Faiz Oranini Giriniz: ");
	    	scanf("%d",&faizorani);
	    	printf("Faizde Kac Gun Kalacak: ");
	    	scanf("%d",anaparaninfaizdekaldigigun);
	    	faizgeliri=anapara*faizorani*anaparaninfaizdekaldigigun/36500;
			printf("Faiz Orani: %d\n",faizgeliri);
	    	printf("Anapara ve Faiz Orani: %d\n",(anapara+faizgeliri));
		}
	   
	    else 
	    {
	    	printf("1-3 arasi sayi girilmedi");
	    	break;
		}
	    
	    case 4:
	    
		system("CLS");
	    
		int x,islemsonucu;
		printf("X degerini Giriniz: ");	
	    scanf("%d",&x); 	 
	    
		if(x=0)
	    {
		  printf("x=5'tir.");	
	    }
	    	
	    else if(x<0)	
	    {
	     islemsonucu=5*x-2;
			printf("5x(%d)-2= %d",islemsonucu);
	    } 	 
	    	
	    else if(x>0)	
	    {
	    	islemsonucu=10*x-5*x+15;
			printf("10x(%d)-5x(%d)+15= %d",x,islemsonucu);
		}  	 
	    break;
		
		case 5:
			
	    	printf("~~~~~Birim Cemberde Bolge Bulma~~~~~\n\n");
	    	int bolge;
	    	printf("Bolge Giriniz[0-360]: ");
	    	scanf("%d",bolge);
	    	
	    	if (bolge>=0 && bolge<=90)
	    	{
	    		printf("\nBirinci Bolgededir.");
			}
	    	
	    	else if(bolge>=90 && bolge<=180)
	    	{
	    		printf("\nIkinci Bolgededir.");
			}
	    	
	    	else if(bolge>=180 && bolge<=270)
	    	{
	    		printf("\nUcuncu Bolgededir.");
			}
	    	
	    	else if(bolge<=270 && bolge<=360)
	    	{
	    		printf("\nDorduncu Bolgededir.");
			}
	    	
	    	else
	    	{
	    		printf("Yanlis Aralik.(0-360 arasi giriniz)");
			}
	    	break;
	    	
	    	case 6:
	    	
	    	printf("~~~~~Ucgende Eksik Kenar Degerini Bulma~~~~~\n\n");
	    	int k1,k2,ucuncudeger;
	    	
			printf("Birinci Kenari Giriniz: ");
	    	scanf("%d",&k1);
	    	
	    	printf("Ikinci Kenari Giriniz: ");
	    	scanf("%d",&k2);
	    	
	    	ucuncudeger=180-(k1+k2);
	    	
	    	if(ucuncudeger>0 && ucuncudeger<180)
	    	{
	    		printf("\nUcuncu Deger: %d",ucuncudeger);
			}
	    	
	    	else
	    	{
	    		printf("Girilen Degerler Toplami 180'i Gecemez veya 0'dan Asagi Olamaz.");
			}
	    	break;
	    	
	    	case 7:
	    	
	    	printf("~~~~~Kenari Verilen Cokgenin Ic Acisini Hesaplama~~~~~\n\n");
	        int n,icacilartop;
	        
	        printf("Kenar Sayisini Giriniz: ");
			scanf("%d",&n);
			
			if(n>3)
			{
			   icacilartop=(n-2)*180/n;
		       printf("Cokgenin Ic Acisi: %d",icacilartop);
	        }
			
			else
			{
				printf("\nHesaplanamadi.. \n3'den az veya negatif..");
			 } 
			 break;
			    
			  case 8:
			    
			    printf("~~~~~Paralelkenarda Alan Hesabi~~~~~\n\n");
			    
			   int  pkh,pkt,pka;
			    
				printf("Tabani Giriniz: ");
			    scanf("%d",pkt);
			    
			    printf("Yukseklik Giriniz: ");
			    scanf("%d",pkh);
			    
			    pka=pkh*pkt;
			    
			    printf("Paralel Kenarin Alani; %d",pka);
			    break;
			    
			    case 9:
			    
			     printf("~~~~~Dikdortgenin Alanini Hesaplama~~~~~\n\n");
			    
			    int dikdortgenalanhesabi,dikdortgenkisakenar,dikdortgenuzunkenar;
			    
				printf("Kisa Kenari Giriniz: ");    
			    scanf("%d",&dikdortgenkisakenar);
			    
			    printf("Uzun Kenari Giriniz: ");
			    scanf("%d",&dikdortgenuzunkenar);
			    
			    dikdortgenalanhesabi=dikdortgenkisakenar*dikdortgenuzunkenar;
			    
			    printf("Dikdortgenin Alani: %d",dikdortgenalanhesabi);
			    break;
			    
			    case 10:
			    
				  printf("~~~~~Dikdortgenin Cevresinin Hesabi~~~~~\n\n");
			    
				int dikdortgen_alan_hesabi,dikdortgen_kisa_kenar,dikdortgen_uzunkenar;
			    
				printf("Kisa Kenari Giriniz: ");    
			    scanf("%d",&dikdortgenkisakenar);
			    
			    printf("Uzun Kenari Giriniz: ");
			    scanf("%d",&dikdortgenuzunkenar);
			    
			    dikdortgenalanhesabi=2*(dikdortgenkisakenar+dikdortgenuzunkenar);
			    
			    printf("Dikdortgenin Cevresi: %d",dikdortgenalanhesabi);
			    break;
			    
			    case 11:
			    
			      printf("~~~~~Dikdortgenin Hacmini Hesaplama~~~~~\n\n");
			    
			    int hacim,d1,d2,d3; 
			       
			    printf("Birinci Degeri Giriniz: ");
			    scanf("%d",&d1);
			    
			    printf("Ikinci Degeri Giriniz: ");
			    scanf("%d",&d2);
			    
			    printf("Ucuncu Degeri Giriniz: ");
			    scanf("%d",&d3);
			    
			    hacim=d1*d2*d3;
			    
			    printf("Hacim: %d",hacim);
			    break;
			    
			   case 12: 
			    
			    printf("~~~~~Dikdortgenin Yuzey Alanini Hesaplama~~~~~\n\n");
			    
			    int yalani; 
			       
			    printf("Birinci Degeri Giriniz: ");
			    scanf("%d",&d1);
			    
			    printf("Ikinci Degeri Giriniz: ");
			    scanf("%d",&d2);
			    
			    printf("Ucuncu Degeri Giriniz: ");
			    scanf("%d",&d3);
			    
			    yalani=d1*d2+d1*d3+d2*d3;
			    
			    printf("Yuzey Alani: %d",yalani);
			    break;
			    
			    case 13:
			    
			    printf("~~~~~Karenin Alanini Hesaplama~~~~~\n\n");
			    
			    int karealani;
			    
			    printf("Kenar Degerini Giriniz: ");
			    scanf("%d",&d1);
			    
			    karealani=d1*d1;
			    
			    printf("\nKarenin Alani: %d",karealani);
			    break;
			    
			    case 14:
			    
			    printf("~~~~~Karenin Cevresini Hesaplama~~~~~\n\n");
			    
			    int karecevresi;
			    
			    printf("Kenar Degerini Giriniz: ");
			    scanf("%d",&d1);
			    
			    karecevresi=d1*4;
			    
			    printf("\nKarenin Cevresi: %d",karecevresi);
			    break;
			    
			    case 15:
			    
			     printf("~~~~~Karenin Hacmini Hesaplama~~~~~\n\n");
			    
			    int karehacmi,kareh;
			    
			    printf("Kenar Degerini Giriniz: ");
			    scanf("%d",&d1);
			    
			    karehacmi=d1*d1*kareh;
			    
			    printf("\nKarenin Hacmi: %d",karehacmi);
			    break;
			    
			    case 16:
			    
			    printf("~~~~~Kare Prizmanin Yuzey Alanini Hesaplama~~~~~");
			    
			    int prizmaninyalani,px,ph;
			    
			    printf("Kenar Degerini Giriniz: ");
			    scanf("%d",&px);
			    
			    printf("Kenar Yuksekligini Giriniz: ");
			    scanf("%d",&ph);
			    
			    prizmaninyalani=2*px+4*px+ph;
			    
			    printf("\nKare Prizmanin Yuzey Alani: %d",prizmaninyalani);
			    break;
			    
			    case 17:
			     
			     printf("~~~~~Yamugun Orta Tabanini Hesaplama~~~~~\n\n");
			     
			      int alta,ustb,yortatabanhesap;
			    
			    printf("Ust Tabani Giriniz: ");
			    scanf("%d",&ustb);
			    
			    printf("Alt Tabani Giriniz: ");
			    scanf("%d",&alta);
			    
			    yortatabanhesap=(ustb+alta)/2;
			    
			    printf("Orta Taban: %d",yortatabanhesap);
			    break;
			    
			    case 18:
			    
			      printf("~~~~~Dairenin Alanini Hesaplama~~~~~\n\n");
			    
			       int dairer,dairealanhesap;
			      
				  printf("Yaricapi Giriniz: ");
			      scanf("%d",&dairer);
			    
			     dairealanhesap=3*dairer*dairer;
			
				 printf("Daire Alani: %d (pi=3 alinmistir.)",dairealanhesap);
			     
			     dairealanhesap=dairer*dairer;
			    
			    printf("\nDaire Alani: %d (pi sabittir.)",dairealanhesap);
			    break;
			    
			    case 19:
	               
	             printf("~~~~~Dairenin Cevresini Hesaplama~~~~~\n\n");
			    
			       int dairecevre;
			      
				  printf("Yaricapi Giriniz: ");
			      scanf("%d",&dairer);
			    
			     dairecevre=2*3*dairer;
			
				 printf("Daire Cevresi: %d (pi=3 alinmistir.)",dairecevre);
			     
			     dairecevre=d2*dairer;
			    
			    printf("\nDaire Alani: %d (pi sabittir.)",dairecevre);
			    break;
	
	            case 20:
	                  
                  printf("~~~~~Kupun Hacmini Hesaplama~~~~~\n\n");
			    
			       int kupk,kuphesap;
			      
				  printf("Kupun Bir Kenarini Giriniz: ");
			      scanf("%d",&kupk);
			    
			     kuphesap=kupk*kupk*kupk;
			
				 printf("Kupun Hacmi: %d",kuphesap);
			     break;	
	
	             case 21:
	          
	             printf("~~~~~Kupun Yuzey Alanini Hesaplama~~~~~\n\n");
			    
			       int kupya;
			      
				  printf("Kupun Bir Kenarini Giriniz: ");
			      scanf("%d",&kupk);
			    
			     kupya=6*kupk*kupk;
			
				 printf("Kupun Yuzey Alani: %d",kupya);
			     break;	
	              
	             case 22:
	             
	               printf("~~~~~Dik Silindirin Hacmini Hesaplama~~~~~\n\n");
                   
				   int diksilindirhesapla,silindiryaricap,silindiryukselik;
                   
				   printf("Yaricapini giriniz:");
                   scanf("%d",&silindiryaricap);
                   
				   printf("Yuksekligi giriniz:");
                   scanf("%d",&silindiryukselik);
                   
				   diksilindirhesapla=3*silindiryaricap*silindiryaricap*silindiryukselik;
                   
				   printf("Dik silindirin hacmi:%d     (pi 3 alinmistir)",diksilindirhesapla);
                   
				   diksilindirhesapla=silindiryaricap*silindiryaricap*silindiryukselik;
                   
				   printf("\nDik silindirin hacmi:%d*pi   (pi sabittir)",diksilindirhesapla);
	}    
	
	return 0;
}
