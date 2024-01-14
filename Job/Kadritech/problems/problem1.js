let sequence;
let answer = "NO";
for (let i = 0; i < sequence.length; i++) {
  if (sequence[i] === i + 1) {
    answer = "YES";
  }
}
console.log(answer);
