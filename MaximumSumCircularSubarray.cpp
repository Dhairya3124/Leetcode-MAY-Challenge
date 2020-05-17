class Solution {
public:
  int maxSubarraySumCircular(vector<int>& A) {

	int sumVal = 0;
	int minVal = 0;
	int maxVal = A[0];
	int res = INT_MIN;
	int res1 = INT_MAX;

	for (int i = 0; i < A.size(); ++i) {
		sumVal += A[i];

		res = max(res, sumVal - minVal);
		minVal = min(minVal, sumVal);


		res1 = min(res1, sumVal - maxVal);
		maxVal = max(maxVal, sumVal);
	}

	return max(res, sumVal - res1);
  }
};
