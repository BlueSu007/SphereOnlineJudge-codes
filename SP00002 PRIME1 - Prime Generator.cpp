#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int k, n, m;
bool isprime( int x );
inline int read();
inline void write( int x );

int main() {
	
	ios::sync_with_stdio( false );
	k = read();
	
	while ( k-- ) {
		n = read();
		m = read();
		
		for ( register int i = n ; i <= m ; i++ ) {
			if ( isprime(i) ) {
				write(i);
				putchar('\n');
			}
		}
		
		putchar('\n');
	}
	
	return 0;
}

inline int read() {
	
	int f = 1, x = 0;
	char ch = getchar();
	
	while ( !isdigit(ch) ) {
		if ( ch == '-' ) {
			f = -1;
		}
		
		ch = getchar();
	}
	
	while ( isdigit(ch) ) {
		x = x * 10 + ( ch - '0' );
		ch = getchar();
	}
	
	return f * x;
}

inline void write( int x ) {
	if ( x >= 10 ) {
		write( x / 10 );
	}
	
	putchar( x % 10 + '0' );
}

inline bool isprime( int x ) {
	if ( x == 1 ) {
		return false;
	}
	
	for ( int i = 2 ; i * i <= x ; i++ ) {
		if ( x % i == 0 ) {
			return false;
		}
	}
	
	return true;
}
