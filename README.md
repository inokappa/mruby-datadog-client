# mruby-datadog-client   [![Build Status](https://travis-ci.org/inokappa/mruby-datadog-client.png?branch=master)](https://travis-ci.org/inokappa/mruby-datadog-client)
datadog-client class
## install by mrbgems
- add conf.gem line to `build_config.rb`

```ruby
MRuby::Build.new do |conf|

    # ... (snip) ...

    conf.gem :github => 'inokappa/mruby-datadog-client'
end
```
## example
```ruby
p datadog-client.hi
#=> "hi!!"
t = datadog-client.new "hello"
p t.hello
#=> "hello"
p t.bye
#=> "hello bye"
```

## License
under the MIT License:
- see LICENSE file
