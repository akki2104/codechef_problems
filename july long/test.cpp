if (flag == 2)
        {
            rep0(i, 8)
            {
                int x3 = (x1 + x[i]), y3 = (y1 + y[i]);
                if (x3 >= 1 && y3 >= 1 && x3 <= 8 && y3 <= 8)
                {
                    rep0(j, 8)
                    {
                        if (x2 == (x3 + x[i]) && y2 == (y3 + y[i]) && (x3 + x[i])>=1 && (x3 + x[i])<=8 && (y3 + y[i])>=1 && (y3 + y[i])<=8 )
                        {
                            flag = 1;
                            break;
                        }
                        else flag=0;
                        int x4 = (x3 + x[i]), y4 = (y3 + y[i]);
                        rep0(k, 8)
                        {
                            if (x2 == x4 + x[i] && y4 == (y3 + y[i]))
                            {
                                flag = 1;
                                break;
                            }
                        }
                    }
                }
                if (flag == 1)
                {
                    break;
                }
            }
        }