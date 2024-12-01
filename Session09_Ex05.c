#include<stdio.h>

int main(){
       int i;
       int sum_chan = 0;
       int min, max;
       int sum_nguyento;
       int index;
       int lua_chon;
       int size;
       int arr[100], n = 0;
       int arry[50], m = 0;
       while (1) {
       	printf("     MENU     \n");
       	printf("1.Nhap so phan tu can nhap va in ra cac phan tu\n");
       	printf("2. In ra cac phan tu dang quan li\n");
       	printf("3. In ra cac phan tu chan va tinh tong\n");
       	printf("4. In ra cac gia tri lon nhat va nho nhat trong mang\n");
       	printf("5. In ra cac phan tu la so nguyen to trong mang va tinh tong\n");
       	printf("6. Nhap vao mot so va thong ke trong mang co bao nhieu phan tu do ton tai\n");
       	printf("7. Them mot phan tu vao vi tri chi dinh\n");
       	printf("8. Thoat\n");
       	printf("\n");
       	printf("\n");
       	printf("Lua chon cua ban la: ");
       	scanf("%d", &lua_chon);
       	switch(lua_chon){
       		case 1:
       			printf("kich thuoc cua mang ma ban mong muon la: \n");
       			scanf("%d", &size);
       			for(i = 0; i < size; i++){
       				printf("gia tri number[%d] = \n", i + 1);
       				scanf("%d", &arr[i]);
				   }
				   break;
			case 2:
				if(size < 0){
					printf("mang dang trong moi ban quay lai 1 de nhap phan tu");
				} else {
					printf("cac phan tu dang co trong mang la: \n");
					for(i = 0; i < size; i++){
					   printf("number[%d] = %d\n", i, arr[i]);
					   printf("\n");
					}
				}
				break;
			case 3:
				
				if(size < 0){
					printf("mang dang trong moi ban quay lai 1 de nhap phan tu");
				} else {
					for(i = 0; i < size; i++){
						if(arr[i] % 2 == 0){
						printf("number[%d] = %d la so chan\n", i, arr[i]);
						scanf("%d", &arry[i]);
						sum_chan = arry[i] + arry[i + 1];
						printf("tong cua cac so chan trong mang la %d", sum_chan);
						} else {
							printf("Trong mang khong co phan tu nao la so chan");
						}
					}
				}
				break;
			
		   }
 
	   } 
	   return 0;
	}
       



 


 




 


 


 



