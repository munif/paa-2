// 1.  include file : yohana desy p 5113100038
#include <stdio.h>
#include <algorithm>
#include <iostream>

using namespace std;

// 2.  deklarasi struct activity: start, finish: aldi febriansyah 5114100015
struct jadwal
{
	int start;
	int finish;
};

// 3.  deklarasi fungsi compare utk sorting struct : ilham aulia majid 5114100144
bool acompare(jadwal a, jadwal b){
	return a.finish < b.finish;
}

// 4.  deklarasi variabel array of struct activity :Faiq Firdausy 5114100165
jadwal arr[100001];


int main()
{
	
	int t, n, i, k, count;
	
	// 5.  baca jumlah test case & loop: I Putu Eka Wira M. 5114100025
	scanf("%d", &t);
	
	//while(t--)
	for(int j=0; j<t; j++)
	{
		// 6.  baca jumlah activity & loop anandi 5114100096
		scanf("%d", &n);
		for(i=0; i<n; i++)
		{
			// 7.  baca input tiap activity -> masukkan ke array Anggit Yudhistira 5114100065
			//scanf("%d %d", &arr[i].start, &arr[i].finish);
			cin >> arr[i].start >> arr[i].finish;
		}
		
		// 8.  lakukan sorting m luqmanul h p 5114100081
		sort (arr, arr+n, acompare);
		
		// 9.  inisialisasi variabel: item pertama & count mohammad rasyid 5114100101
		k = 0; 
		count = 1;
		// 10. loop untuk mengecek semua aktivitas Magista Bella P 5114100007
		for (i=1; i<n; i++)
		{
			// 11. branching untuk mengecek kompatibilitas aktivitas ishardan 5113100182
			if (arr[i].start >= arr[k].finish)
			{
				// 12. update count : william suhud 5114100002
				count++;
				
				// 13. update k to current item laurensius adi 5113100141
				k = i;
			}
		}
		// 14. print count: muhsin bayu 5114100071
		printf("%d\n", count);
			
	
		//if (t==0)
		//	break;
	}	
}










