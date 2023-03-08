vector<long long int> primes(long long int n) 
{ 
    bool prime[n + 1]; 
  
    
    memset(prime, true, sizeof(prime)); 
    for (int i = 2; i * i <= n; i++) { 
  
        
        if (prime[i] == true) { 
  
            
            for (int j = i * 2; j <= n; j += i) 
                prime[j] = false; 
        } 
    } 
  
    vector<long long int> arr;     
    for (int i = 2; i < n; i++)  
        if (prime[i]) 
            arr.push_back(i);     
  
    return arr; 
} 
  
int countDigits(long long int n) 
{ 
    long long int temp = n; 
    int c = 0; 
    while (temp != 0) { 
        temp = temp / 10; 
        c++; 
    } 
    return c; 
} 
  
bool frugal(long long int n) 
{ 
    vector<long long int> r = primes(n);    
    long long int t = n; 
    long long int s = 0; 
    for (int i = 0; i < r.size(); i++) { 
        if (t % r[i] == 0) { 
              
            long long int k = 0;   
              
            while (t % r[i] == 0) { 
                t = t / r[i]; 
                k++; 
            } 
  
            if (k == 1)  
                s = s + countDigits(r[i]); 
            else if (k != 1)  
                s = s + countDigits(r[i]) + countDigits(k);             
        } 
    } 
  
    return (countDigits(n) > s && s != 0); 
} 