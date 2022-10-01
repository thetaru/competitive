N, Y = gets.chomp.split(" ").map(&:to_i)

result = [-1, -1, -1]

catch :done do
    (0..N).each do |i|
        (0..N-i).each do |j|
            if (k = N - (i + j)) < 0
                next
            end
            sum = 10000*i + 5000*j + 1000*k
            if sum == Y
                result[0] = i
                result[1] = j
                result[2] = k
                throw :done
            end
        end
    end
end

puts "#{result[0]} #{result[1]} #{result[2]}"