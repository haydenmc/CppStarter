project('cpp-starter', 'cpp',
    version: '0.0.1',
    default_options: [
        'cpp_std=c++20',   # Use C++20
        'warning_level=2', # Enable extra warnings
        'werror=true',     # Treat warnings as errors
    ])

# Subprojects
fmt_wrap = subproject('fmt',
    default_options: [
        'default_library=static'
    ])
spdlog_wrap = subproject('spdlog',
    default_options: [
        'tests=false',
        'default_library=static',
        'compile_library=true',
        'external_fmt=enabled',
    ])

# Executable
executable('cpp-starter',
    dependencies: [
        spdlog_wrap.get_variable('spdlog_dep'),
    ],
    include_directories: [
        'src/',
    ],
    cpp_pch: 'src/pch.h',
    sources: [
        'src/Entrypoint.cpp'
    ])