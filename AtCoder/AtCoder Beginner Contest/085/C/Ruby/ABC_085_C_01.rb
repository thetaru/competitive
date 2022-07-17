N, Y = gets.chomp.split(" ").map(&:to_i)

result = [-1, -1, -1]

flg = false

(0..N).each do |i|
    if flg then break end
    (0..N-i).each do |j|
        if flg then break end
        if (k = N - (i + j)) < 0
            next
        end
        sum = 10000*i + 5000*j + 1000*k
        if sum == Y
            flg = true
            result[0] = i
            result[1] = j
            result[2] = k
            break
        end
    end
end

puts "#{result[0]} #{result[1]} #{result[2]}"