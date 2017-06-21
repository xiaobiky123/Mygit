def test(input_list):
    summ=0
    lenth=len(input_list)
    for k in range(len(input_list)):
        #summ=summ+k
        elem=input_list.pop()
        summ=summ+pow(elem,2)
        print elem
    ju=float(summ)/float(lenth)
    print "length=%d" %(lenth)
    print "summ=%f" % summ
    print "ju=%f" % ju
        
a=[1,2,3]
test(a)
    
ERROR!!! TO REDIFINE!!
