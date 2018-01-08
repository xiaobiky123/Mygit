def k_order_origin_moment(input_list,k):
    summ=0
    lenth=len(input_list)
    for i in range(len(input_list)):
        elem=input_list.pop()
        summ=summ+pow(elem,k)
        print elem
    origin_moment=float(summ)/float(lenth)
    print "length=%d" %(lenth)
    print "summ=%f" % summ
    print "origin_moment=%f" % origin_moment
    return origin_moment

input_list=[1050, 1100,	1080,	1120,	1200,	1250,	1040,	1130,	1300, 1200]        
output=k_order_origin_moment(input_list,1)
print "the_k_order_moment_about_the_origin = %f" %output


def k_order_central_moment(input_list,k):
    summ=0
    summ_a=0
    lenth=len(input_list)
    for i in input_list:
        summ_a=summ_a+i
    ave=float(summ_a)/float(lenth)

    for j in input_list:
        summ=summ+pow((j-ave),2)
    central_moment=float(summ)/float(lenth)

    print "length=%d" %(lenth)
    print "summ=%f" % summ
    print "central_moment=%f" %  central_moment
    print "ave=%f" % ave
    return  central_moment

input_list=[1050, 1100,	1080,	1120,	1200,	1250,	1040,	1130,	1300, 1200]        
output=k_order_central_moment(input_list,2)
print "k_order_central_moment = %f" %output
