unsigned mask = ~0;
//as long as num and mask has bit 1 at the same place (i.e. overlap), shift mask left by one bit”
while(num & mask) mask<<=1;
return ~mask&~num;

}
};

//use XOR  results the same solution

int findComplement(long num) {
long i;
for(i=1;i<=num;i<<1) num^=i;
return num;
}
