N = gets.strip.to_i

t_old = x_old = y_old = 0
N.times do
    t, x, y = gets.strip.split.map(&:to_i)

    time = (t_old - t).abs
    dist = (x_old - x).abs + (y_old - y).abs

    if (t + x + y) % 2 != 0 || time < dist
        puts "No"
        exit
    end

    t_old, x_old, y_old = t, x, y
end

puts "Yes"