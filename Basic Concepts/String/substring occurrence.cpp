#include <iostream>
using namespace std;

void computeLPSArray(string pat, int M, int lps[])
{
	int len = 0;
	int i = 1;
	lps[0] = 0;

	while (i < M) {
		if (pat[i] == pat[len]) {
			len++;
			lps[i] = len;
			i++;
		}
		else
		{

			if (len != 0) {
				len = lps[len - 1];

			}
			else
			{
				lps[i] = len;
				i++;
			}
		}
	}
}

int KMPSearch(string pat, string txt)
{
	int M = pat.length();
	int N = txt.length();

	// Create lps[] that will hold the longest
	// prefix suffix values for pattern
	int lps[M];
	int j = 0; // index for pat[]

	// Preprocess the pattern (calculate lps[]
	// array)
	computeLPSArray(pat, M, lps);

	int i = 0; // index for txt[]
	int res = 0;
	int next_i = 0;

	while (i < N) {
		if (pat[j] == txt[i]) {
			j++;
			i++;
		}
		if (j == M) {

			j = lps[j - 1];
			res++;
		}


		else if (i < N && pat[j] != txt[i]) {

			if (j != 0)
				j = lps[j - 1];
			else
				i = i + 1;
		}
	}
	return res;
}


int main()
{
	string txt ;
	string pat ;
	cin>> txt>> pat;
	int ans = KMPSearch(pat, txt);

	cout << ans;

	return 0;
}


