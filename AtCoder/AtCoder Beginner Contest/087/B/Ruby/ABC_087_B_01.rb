A = gets.chomp.to_i
B = gets.chomp.to_i
C = gets.chomp.to_i
X = gets.chomp.to_i

count = 0

(0..A).each do |i|
    (0..B).each do |j|
        (0..C).each do |k|
            if 500*i + 100*j + 50*k == X
                count = count + 1
            end
        end
    end
end

puts "#{count}"