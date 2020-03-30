//PART B
//Question 4 (part b)
//pseudo Code

// For bad character heuristic pre-processing algo

BMBadPrepro()
{
	for a from 0 to alphabetSize:
	   badCH[a] = -1
	for j from 0 to m:
       a = pattern[j];
       BadCH [a] = j;
}

// for Good Suffix Heuristic Pre-processing algo

BMGoodSPrePro()
{
i <--- m
j <--- m+1
f[i] <--- j
while (i > 0)
    while (j <= m) and (pattern[i-1] != pattern[j-1])
        if (s[j] == 0)
            s[j] <--- j-1   
            j <--- f[j]
    i--
    j--
    f[i] <--- j	
	
}	

// boyer moore pre-processing algo

BMpreProc()
{
f[] <--- new int [m+1]
BMBadPrepro()
BMGoodSPrepro()
}

// boyer moore searching algo 

BMSearch()
{
i <--- 0
while ( i <= (n-m) )
    j <--- m-1
    while ( j>= 0) and (pattern [j] == text [i+j]
	   j--
	   if (j < 0)
		   report (i)
	       i+=s[0]
	   else 
         i += math.max(s[j+1], j - BadCH [text[i+j]])
}


// dry run on been performed on the example in PDF file







    