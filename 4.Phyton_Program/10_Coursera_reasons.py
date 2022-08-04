# coursera finnacial aid reasons
answer1 = "I am a student from India and want to learn <|course name|>. I think it will be beneficial for my work. But I’ve no job of my own to carry the expenses to pay for the certificate of this course. I live only for my scholarship, it is very much difficult for me to gather such amount of money for the certificate. Financial Aid will help me take this course without any adverse impact on my monthly essential needs. So I’m badly in need of this financial aid. I want to take this course as I want to learn. This course will boost my job prospects after graduation from my institute. It will help perform better in understanding and learning this technology and give me an edge over my competitors. A verified certificate will attach credibility to the certificate I receive from this course. I plan to complete all assignments on or before time as I have done in previous Courses. Also, I intend to participate in Discussion Forums, which I have found to supplement my learning immensely in the other online courses I have taken on Coursera. I also plan to grade assignments that are to peer-reviewed which I believe will an invaluable learning"
answer2 = "My main career goal is to learn every day. I really want to learn and to progress in my career. In <|branch name|> , it requires constant learning and improving. Taking this course will help me to learn and study this <|course name|> and also to implement it. It can help me advance in my knowledge. This course will help me in defining <|course name|>, understanding how <|course name|> could potentially impact our business and industry, to write a thought leadership piece regarding use cases and industry potential of <|course name|>, explain <|course name|> to clients, friends, joining a community of economists, business leaders, entrepreneurs, and technologists that are shaping this technology as we speak. Identifying which aspects of <|course name|> seem most important and relevant to us, Walking away with a strong foundation in where <|course name|> is going, what it does, and how to prepare for it. <|course name|> course will help me achieve it to learn. Courses on Coursera helped me to greatly increase my  knowledge about  the various fields of  technology."
answer3 = " I don’t possess a good financial condition at this stage to afford for this course for the above-mentioned reasons. I don’t have enough money to invest in my education, I can invest only my time now."

course = input("Enter the course name you are applying for financial aid : ")
branch = input("Enter the bracch you are studing : ")

answer1 = answer1.replace("<|course name|>",course)
answer2 = answer2.replace("<|branch name|>",branch)
answer2 = answer2.replace("<|course name|>",course)

with open("10_Answers.txt","w") as f:
    f.write("Answer 1 : \n")
    f.write(answer1)
    f.write("\n")

    f.write("Answer 2 : \n")
    f.write(answer2)
    f.write("\n")
    
    f.write("Answer 3 : \n")
    f.write(answer3)
    f.write("\n")