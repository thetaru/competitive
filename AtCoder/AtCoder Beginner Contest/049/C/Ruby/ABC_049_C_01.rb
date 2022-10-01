S = gets.chomp

loop do
    size_old = S.length
    ["dreamer", "eraser", "dream", "erase"].each do |i|
        S.chomp!(i)
    end
    size_new = S.length
    break if size_old - size_new == 0
end

puts S.length == 0 ? "YES" : "NO"