#ifndef _CARD_CLUSTER_H_
#define _CARD_CLUSTER_H_

#include <memory>

class CardAbst;

class CardCluster
{
public:
  CardCluster(const CardAbst &ca, bool numb_only);
  CardCluster(void);
  ~CardCluster(void);
  bool None(int st) const { return none_[st]; }

  int Bucket(int st, unsigned int h) const
  {
    if (short_buckets_[st])
    {
      return (int)short_buckets_[st][h];
    }
    else
    {
      return int_buckets_[st][h];
    }
  }
  const int *NumBuckets(void) const { return num_buckets_.get(); }
  int NumBuckets(int st) const { return num_buckets_[st]; }

private:
  std::unique_ptr<bool[]> none_;
  unsigned short **short_buckets_;
  int **int_buckets_;
  std::unique_ptr<int[]> num_buckets_;
};

#endif
