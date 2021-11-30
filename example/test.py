

def test(file1, file2):
   firstfile = open(file1, 'r')
   secondfile = open(file2, 'r')
   allfile1 = firstfile.read()
   allfile2 = secondfile.read()

   same = 0
   diff = 0
   if (len(allfile2) < len(allfile1)):
       minlength = len(allfile2)
       diff += len(allfile1) - len(allfile2)
       total = len(allfile1)
   else:
       minlength = len(allfile1)
       diff += len(allfile2) - len(allfile1)
       total = len(allfile2)
   for i in range(minlength):
      if (allfile1[i] == allfile2[i]):
          same += 1
      else:
          diff += 1

   if (float(diff)/float(total) < 0.05):
       return True
   else:
       return False
