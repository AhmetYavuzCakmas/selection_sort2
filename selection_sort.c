int dizi[n-1];
for(int i =0;i<n;i++){
    int key = i;
    for(int j=i+1;j<n;j++){
        if(dizi[key]>dizi[j]){
            key=j;
        }
    }
    int temp=dizi[key];
    dizi[key]=dizi[i];
    dizi[i]=temp;

}
