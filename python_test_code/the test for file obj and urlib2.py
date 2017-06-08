import urllib2

target_url=("https://archive.ics.uci.edu/ml/machine-learning-"
"databases/undocumented/connectionist-bench/sonar/sonar.all-data")

data = urllib2.urlopen(target_url)

f=data.read()

fd=open("C:\Python27\MyWork\mytest0.txt",'w')

fd.write(f)

fd.close()
