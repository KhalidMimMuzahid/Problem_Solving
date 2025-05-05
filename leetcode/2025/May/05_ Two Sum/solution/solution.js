var twoSum = function (nums, target) {
  var dict = {};
  let ans;
  for (let i = 0; i < nums.length; i++) {
    let value = nums[i];
    if (dict[`${target - value}`] !== undefined) {
      ans = [dict[`${target - value}`], i];
      break;
    } else {
      dict[value] = i;
    }
  }
  return ans;
};

(nums = [2, 7, 11, 15]), (target = 9);

console.log(twoSum(nums, target));
