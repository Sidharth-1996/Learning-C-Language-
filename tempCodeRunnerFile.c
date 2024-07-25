for(int i=1;i=m;i++){
        printf("Enter the %dth number\n",i);
        scanf("%d",&a);
        for(int j=0;j<m;j++){
            for(int k=0;k<10;k++){
                tab[j][k]=a*(k+1);
            }
        }
    }