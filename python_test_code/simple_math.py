def test(*input_list):
    summ=0
    for k in range(input_list):
        summ=summ+pow(k,2)
    print summ
test([1,2,3])
    
