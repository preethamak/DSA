#include <iostream>
#include <vector>

using namespace std;

// Function to count the number of prime numbers less than n
int countPrimes(int n) {
    int cnt = 0;
    vector<bool> prime(n+1, true);
    prime[0] = prime[1] = false; // 0 and 1 are not prime numbers
    
    // Sieve of Eratosthenes algorithm
    for (int i = 2; i < n; ++i) {
        if (prime[i]) {
            cnt++; // Found a prime number
            // Mark all multiples of i as non-prime
            for (int j = 2*i; j < n; j += i) {
                prime[j] = false;
            }
        }
    }
    
    return cnt;
}

int main() {
    // Sample test case
    int n = 20; // Count primes less than 20
    int result = countPrimes(n);
    
    cout << "Number of prime numbers less than " << n << " is: " << result << endl;
    
    return 0;
}
