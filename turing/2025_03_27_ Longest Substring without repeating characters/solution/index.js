var lengthOfLongestSubstring = function (string) {
  longestSubstring = "";
  let leftIndex = 0;
  let rightIndex = 0;
  let stringArray = string.split("");
  for (const i in stringArray) {
    // console.log(`i=${i}, left=${leftIndex}, right=${rightIndex}`);
    if (i == 0) {
      rightIndex = rightIndex + 1;
      continue;
    }
    for (j = leftIndex; j < rightIndex; j++) {
      if (stringArray[i] === stringArray[j]) {
        leftIndex = j + 1;
        break;
      }
    }
    let subString = stringArray?.slice(leftIndex, rightIndex + 1)?.join("");
    if (subString?.length > longestSubstring?.length) {
      longestSubstring = subString;
    }
    rightIndex = rightIndex + 1;
  }

  return longestSubstring?.length;
};
console.log(lengthOfLongestSubstring("pwwkew"));
