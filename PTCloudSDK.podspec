
Pod::Spec.new do |s|

  s.name         = "PTCloudSDK"
  s.version      = "0.0.1"
  s.summary      = "基本使用功能"
  s.description  = <<-DESC
    0.0.x:基础功能合集使用
                   DESC

  s.homepage     = "https://github.com/5hito/PTCloudSDK"
  s.license = {"type"=>"MIT", "file"=>"LICENSE"}
  s.author             = { "5hito" => "beemans@foxmail.com" }

  s.ios.deployment_target    = '8.0'
  s.source       = { :git => "https://github.com/5hito/PTCloudSDK.git", :tag => s.version.to_s }

  s.frameworks = "WebKit"
  s.requires_arc = true

#s.resources = 'lib/Resources/*.bundle'
  s.source_files = 'lib/Header/*.h'
  s.ios.vendored_libraries = 'lib/libPTCloudSDK.a'

  s.dependency "AVOSCloud"

end
