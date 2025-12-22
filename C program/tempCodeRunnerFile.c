  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]>a[i-1][j] && a[i][j]>a[i][j-1] && a[i][j]>a[i][j+1] && a[i+1][j])
            {
                 count+=1;
            }
            
        }
    }

    pri