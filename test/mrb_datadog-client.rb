##
## datadog-client Test
##

assert("datadog-client#hello") do
  t = datadog-client.new "hello"
  assert_equal("hello", t.hello)
end

assert("datadog-client#bye") do
  t = datadog-client.new "hello"
  assert_equal("hello bye", t.bye)
end

assert("datadog-client.hi") do
  assert_equal("hi!!", datadog-client.hi)
end
