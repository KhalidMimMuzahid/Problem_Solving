var singleNumber = function (nums) {
  let ans = 0;
  //   nums.forEach(function (each) {
  //     ans ^= each;
  //   });
  for (let num of nums) {
    ans ^= num; // XOR operation
  }
  return ans;
};

const nums = [4, 1, 2, 1, 2];
const result = singleNumber(nums);
console.log(result);
