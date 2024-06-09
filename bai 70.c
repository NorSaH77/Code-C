#include<stdio.h>
#include<string.h>


typedef struct{
    char ht[50];
    char ns[50];
    float dtb;
}sinhvien;



void nhap(int *n){
    printf("nhap so sinh vien: ");
    scanf("%d",n);
}



void sx(int n){
    int i,j,tg;
    char tgc[50];
    sinhvien sv[50];
    for(i=0;i<n;i++){
        fflush(stdin);
        printf("nhap sinh vien thu %d:\n",i+1);
        printf("ho ten: ");
        fgets(sv[i].ht,sizeof(sv[i].ht),stdin);
        printf("nam sinh: ");
        fgets(sv[i].ns,sizeof(sv[i].ns),stdin);
        printf("diem trung binh: ");
        scanf("%f",&sv[i].dtb);
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(sv[i].dtb<sv[j].dtb){
                tg=sv[i].dtb;
                sv[i].dtb=sv[j].dtb;
                sv[j].dtb=tg;
                strcpy(tgc,sv[i].ht);
                strcpy(sv[i].ht,sv[j].ht);
                strcpy(sv[j].ht,tgc);
            }
        }
    }
    printf("danh sach sinh vien theo thu tu giam dan theo diem trung binh la:\n");
    for(i=0;i<n;i++){
        printf("%s---%.2f\n",sv[i].ht,sv[i].dtb);
    }
}



int main(){
    int n;
    nhap(&n);
    sx(n);
    return 0;
}
