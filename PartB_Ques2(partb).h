//PART B
//Question 2 (part b)
//pseudo Code


void RKMFun()
{
N <--- length[Text]
M <--- length [pattern]
H <--- d^(m-1) mod q
P <--- 0
t0 <--- 0

for i from 1 to m:        //refering to the preprocessing phase
   P <--- (dp + Pattern[i] mod q
   t0 <--- (dt0 + Text[i]) mod q
   
for s from 0 to (n-m)   //here we are refering to the matching phase
    if (p = ts)
		if (Pattern[1....m] = Text[s+1...s+m)
			print "pattern shifts" s
	if s < (n-m) 
        t(s-1) <--- (d(ts-Text[s+1]H)+Text[s+=m+1])mod q	
}
  
// for this pseudo code i have taken help from slides as that algo was given their

