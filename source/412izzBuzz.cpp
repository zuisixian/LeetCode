class Solution1 {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> res;

		for (int i = 1; i <= n; i++) {
			if ((!(i % 3)) && (!(i % 5))) {
				res.push_back("FizzBuzz");
			}
			else if (!(i % 3)) {
				res.push_back("Fizz");
			}
			else if (!(i % 5)) {
				res.push_back("Buzz");
			}
			else {
				res.push_back(to_string(i));
			}
		}
		return res;
	}
};


class Solution {
public:
	vector<string> fizzBuzz(int n) {
		vector<string> res(n);

		for (int i = 1; i <= n; i++) {
            if(i%3 ==0){
                res[i-1] += "Fizz";
            }
            if(i%5 == 0){
                res[i-1] +="Buzz";
            }
            if(res[i-1].empty()){
                res[i-1] = to_string(i);
            }

		}
		return res;
	}
};

//c

/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */

char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char buf[11];
    char** re_p = (char**)malloc(sizeof(char*)*n);



    char** re_p = (char**)malloc(sizeof(char*)*n);
    int i = 0;
    for(i=0;i<n;i++)
    {
        if(((i+1)%3==0)&&((i+1)%5==0))
        {
            sprintf(buf,"%s","FizzBuzz");
        }else if((i+1)%3==0){
            sprintf(buf,"%s","Fizz");
        }else if((i+1)%5==0){
            sprintf(buf,"%s","Buzz");
        }else{
            sprintf(buf,"%d",i+1);
        }
        re_p[i]=malloc(sizeof(buf));
        memcpy(re_p[i],buf,strlen(buf)+1);
        memset(buf,"",11);
    }

    return re_p;
}

char** fizzBuzz(int n, int* returnSize) {
	*returnSize = n;
	char buf[11];
	//char** re_p = (char**)malloc(sizeof(char*)*n);


	char** re_p = (char**)malloc(sizeof(char*)*n;
	int i = 0;
	for (i = 0; i<n; i++)
	{
		if (((i + 1) % 3 == 0) && ((i + 1) % 5 == 0))
		{
			sprintf(buf, "%s", "FizzBuzz");
		}
		else if ((i + 1) % 3 == 0) {
			sprintf(buf, "%s", "Fizz");
		}
		else if ((i + 1) % 5 == 0) {
			sprintf(buf, "%s", "Buzz");
		}
		else {
			sprintf(buf, "%d", i + 1);
		}
		re_p[i] = (char*)malloc(sizeof(buf));
		

		memcpy(re_p[i], buf, strlen(buf) + 1);

		memset(buf, '\0', 11);
	}

	return re_p;
}
