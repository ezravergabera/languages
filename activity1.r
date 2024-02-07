cs <- c(23, 19, 30, 22, 23, 29, 35, 36, 33, 25)
ts <- c(430, 430, 333, 410, 390, 377, 325, 310, 328, 375)

plot(cs, ts, main = "Scatterplot of Class Size vs Test Score",
     xlab = "Class Size (Student-Teacher Ratio)",
     ylab = "Test Score")

grid()