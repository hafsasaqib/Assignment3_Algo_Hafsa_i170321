

//PART A
//Question 2 (part c)
//pseudo Code


void NaiveOptimized()
{
T <--- length[Text]
P <--- length [pattern]
i <--- 0

while i <= T-P
   for j from 0 to P
    if [text[i+j]!=pattern[j]
	    break
	if pattern[0....P-1] == Text[i,i+1...i+P-1]
        print "pattern is at" i
        i=i+P
    else if (j==0)
        i=+1
    else
        i+=j
}	
  
// for this pseudo code i have taken help from the internet but not copied, just taken a concept that how optimized and further explanation
// is written in PDF for the algo.


