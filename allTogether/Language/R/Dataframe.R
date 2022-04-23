vector1 = c(1:5)
vector2 = c("a","b","c","d","e")

df = data.frame(vector1,vector2)
print(df)


df1 = data.frame(name=c("abc","xyz"),age=c(20,30),gender=factor(c("male","female")),
                 stringsAsFactors = T)
print(df1)


print(levels(df1$gender))  ##a

df3 = data.frame(name=c("abc","xyz"),age=c(20,30),gender=factor(c("male","female")))
print(df1)

is.factor(df1$name)     ## This will show the difference
is.factor(df3$name)

########################### Sir Code  ######################################
df1=data.frame(Name=c("RAM","SHAM"),AGE=c(20,30),GENDER=factor(c("MALE","FEMALE")),stringsAsFactors = T)
is.factor(df1$Name)

df1=data.frame(Name=c("RAM","SHAM"),AGE=c(20,30),GENDER=factor(c("MALE","FEMALE")),stringsAsFactors =F)
is.factor(df1$Name)

#############################

View(df1)  ## a table view will be opened 
colnames(df1)   ## shows column names 
rownames(df1)   ## show row names 
 
attach(df1)   ## column can be printed on their own 
print(age)

detach(df1)     ## now it wont work 
print(age)
