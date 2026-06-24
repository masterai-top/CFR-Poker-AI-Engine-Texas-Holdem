#include <stdio.h>
#include <stdlib.h>

#include <memory>
#include <string>
#include <vector>

#include "CardAbst.h"
#include "constants.h"
#include "DiskFiles.h"
#include "GameInfo.h"
#include "FileOperation.h"

using std::string;
using std::unique_ptr;
using std::vector;

CardAbst::CardAbst()
{
  card_abstraction_name_ = "nhs2";

  bucketings_.clear();
  bucketings_.push_back("null");
  bucketings_.push_back("null");
  bucketings_.push_back("hs");
  bucketings_.push_back("hs");

  int max_street = GameInfo::MaxStreet();
  if ((int)bucketings_.size() < max_street + 1)
  {
    fprintf(stderr, "Need %i bucketings\n", max_street + 1);
    exit(-1);
  }
}
