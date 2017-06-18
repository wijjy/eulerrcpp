#include <Rcpp.h>
using namespace Rcpp;


class prime_sieve {
  // simple sieve at the moment
  prime_sieve(long max):  primes(100) {
    init_primes();
  }
  int next() {
    if (pos==array_length) {
      primes.resize(2*array_length, 0);
      array_length *=2;
    }
    if (primes[pos]=0) {
      for (k=last_k+1; ;k++) {
        try1 = 6*k-1;
        try2 = 6*k+1;
        mx = sqrt(try2);
        for (int i=0;;i++) {
          if (try1%primes[i]==0) {
            
          }
        }
      }
      
    } 
    return primes[pos++];
  }
  
private:
  void init_primes() {
    primes[0]=2; prinmes[1]=3; primes[2]=5; primes[3]=7; primes[4]=11; primes[5]=13;
    pos=0;
    k=2;
  }
  
  std::vector<int> primes
  int pos;
  int array_length=100;
  int last_k=2;
};