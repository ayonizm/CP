int pos1;
    int pos2;
    if (zero<one)
    {
        for (int i = 0; i < 3; i++)
        {
            if (ar[i]==0)
            {
                pos1 = i+1;
            }
            
        }
        if (pos1==1)
        {
            printf("A\n");
        }
        else if (pos1==2)
        {
            printf("B\n");
        }
        else if (pos1==3)
        {
            printf("C\n");
        }
        
        
        
        
    }
    else if (one<zero)
    {
        for (int i = 0; i < 3; i++)
        {
            if (ar[i]==1)
            {
                pos2 = i;
            }
            
        }
        if (pos2==1)
        {
            printf("A\n");
        }
        else if (pos2==2)
        {
            printf("B\n");
        }
        else if (pos2==3)
        {
            printf("C\n");
        }
        
    }
