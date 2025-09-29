
with open('Zaid.jpg','rb') as rf:
    with open('Zaid_copy.jpg','wb') as wf:
        """ for line in rf:
           wf.write(line) """
        chunck_size=4096
        rf_chunck=rf.read(chunck_size)
        while  len(rf_chunck)>0:
              wf.write(rf_chunck)
              rf_chunck=rf.read(chunck_size)
    

    
    
with open ('test.txt','r')  as r:
    content=r.readline()
    for line in r():
        print(content)
    
    
    """ size_to_read=10
    f_contents=f.read(size_to_read) """
    """print(f_contents)
    f_contents=f.read(size_to_read)
    print(f_contents)
    f.seek(0)
    f_contents=f.read(size_to_read)
    print(f_contents) """
   
    




    """ while len(f_contents)>0:   
        print(f_contents, end="")
        f_contents=f.read(size_to_read)
        


 """
with open('test.txt','r') as r:
    content=r.readline(10)
    print(content,end='')
    content=r.readline(10)
    print(content,end='')
    #f_contents=f.readline()
    #print(f_contents, end="")
    #f_contents=f.readline()
    #print(f_contents, end="")
#f = open('test.txt','r')
#print(f.mode)

#f.close()




