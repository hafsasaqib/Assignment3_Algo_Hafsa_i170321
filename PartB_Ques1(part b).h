

//PART B
//Question 1 (part b)
//pseudo Code


void KMPprefixFun()
{
S <--- array of integers of length[pattern]
S[0] <--- 0
border <--- 0
for i from 1 to |pattern| - 1:
    while (border > 0) and (pattern[i] != pattern[border])
	   border <--- S[border -1]
    if (pattern[i] == pattern[border])
		border <--- border + 1
	else
		border <--- 0
 S[i] <--- border	
 
return S
}
 
    
// the dry run of this algo is provided in the PDF solution for the prefix table created their
