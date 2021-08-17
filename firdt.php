<?php 
  $t=(int)readline();
  for($o=0;$o<$t;$o++){
    list($n, $u,$v) = explode(" ", trim(fgets(STDIN)));
    $val = explode(" ", trim(fgets(STDIN)));
    $ans=10000000000;
    for($i=1;$i<$n;$i++){
      if(abs($val[$i]-$val[$i-1])>=2)$ans=0;
      if(abs($val[$i]-$val[$i-1])==1)$ans=min($ans,min($u,$v));
      if($val[$i]==$val[$i-1])$ans=min($ans,$v+min($u,$v));
    }
    echo "$ans\n";
  }
?>