int sequenceSum(int start, int end, int step)
{
  int sum = 0;
  for (start; start <= end; start += step)
  {
    sum += start;
  }
  return sum;
}